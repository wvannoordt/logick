#pragma once

#include "gate_t.h"

namespace logick
{
    class or_t : public gate_t
    {
        public:
            or_t(void)
            {
                inputs.resize(2);
            }
            void propagate(void)
            {
                
            }
    };
}