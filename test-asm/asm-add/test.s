#####################################################
#register:

#x1:compare return address
#x2:pass data address
#x3:exit address 0x13000000
#x4:fail data address
#x5:print string
#x29:line_feed data address
#x30:tag_test data address

#x6-x9:x0,x31 
#x10-x19:function 
#x20-x27:actual value
#x28
#####################################################

.section .text
.global _start
_start:

#   initialize TUBE address as DAMI
   li x3,   0x13000000
   li x10,  0x3
   li x11,  0x4

   la x2, pass_msg #load pass_msg
   la x4, fail_msg #load pass_msg
   la x29, line_feed #load line_feed
#   la x30, tag_test #tag_test

#   initialize register

#   lable pc

part:
	
     # add x31, x10, x11		  #cmp1:add_rd=x31//x31=2
     # mul x31, x10, x11		  #cmp1:add_rd=x31//x31=2
     lui x31, 0
     lui x12, 0
     slti x13, x12, 1
     beq x12, x10, 2f
1:
     sub x10, x10, x13
     add  x31, x31, x11
     bne x12, x10, 1b

2:     
     li x20, 0xc	
     jal x1, 3f

     jal x0, _finish

#   compare calculated value with the actual value
3:
     # la x30, tag_test #tag_test
     # addi x30, x30, 0

     beq x31, x20, pass
     bne x31, x20, fail


#test_passed
pass:
  
1:   lb x5, 0(x2)
     sb x5, 0(x3)
     addi x2, x2, 1
     bnez x5, pass

# 2:   lb x5, 0(x30)
#     sb x5, 0(x3)

3:   lb x5, 0(x29)
     sb x5, 0(x3)

4:   la x2, pass_msg	#initialize
     # la x30, tag_test   #tag_test

5:   jalr x0, x1, 0


#test_failed
fail:

1:   lb x5, 0(x4)
     sb x5, 0(x3)
     addi x4, x4, 1
     bnez x5, fail

2:   
     lb x5, 0(x30)
     sb x5, 0(x3)

3:   lb x5, 0(x29)
     sb x5, 0(x3)

4:   la x4, fail_msg	#initialize 
     # la x30, tag_test   #tag_test

5:   jalr x0, x1, 0

  
_finish:
    li x3, 0x13000000
#   send CTRL+D to TUBE to indicate finish test
    addi x5, x0, 0x4
    sb x5, 0(x3)
#   dead loop
    beq x0, x0, _finish
#.rept 100
#    nop
#.endr

.section .rodata
pass_msg:
.string "------PASS------"
.byte 0
fail_msg:
.string "------FAIL------"
.byte 0
tag_test:
.string "123456789abcdef"
line_feed:
.string "\n"
.byte 0 
