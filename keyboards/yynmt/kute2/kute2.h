// Copyright 2023 ◤◢◤◢◤◢◤◢ (@yynmt)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define LAYOUT( \
    C0, C1, C2, C3, C4, C5, \
              BS \
    ) \
    { \
        {C0, C1, C2, BS, C3, C4, C5} \
    }
