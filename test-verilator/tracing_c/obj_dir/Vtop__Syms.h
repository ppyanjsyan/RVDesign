// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vtop__Syms_H_
#define _Vtop__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vtop.h"

// SYMS CLASS
class Vtop__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vtop*                          TOPp;
    
    // COVERAGE
    uint32_t __Vcoverage[297];
    
    // SCOPE NAMES
    VerilatedScope __Vscope_top__sub;
    VerilatedScope __Vscope_top__sub__AssertionExample;
    
    // CREATORS
    Vtop__Syms(Vtop* topp, const char* namep);
    ~Vtop__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
