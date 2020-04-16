// ***************************************************************
// Copyright (c) 2020 
//     Guowei Yang <471184555@qq.com>. 
//     Dun Liang <randonlang@gmail.com>. 
// All Rights Reserved.
// This file is subject to the terms and conditions defined in
// file 'LICENSE.txt', which is part of this source code package.
// ***************************************************************
#pragma once
#include "op.h"

namespace jittor {

struct MpiBroadcastOp : Op {
    Var* x, * y;
    int root;

    MpiBroadcastOp(Var* x, int root);
    void infer_shape() override;
    
    const char* name() const override { return "mpi_broadcast"; }
    DECLARE_jit_run;
};

} // jittor