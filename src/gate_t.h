#pragma once

#include "node_t.h"

namespace logick
{
    class gate_t
    {
        public:
            virtual void propagate(void)=0;
        private:
            std::vector<node_t> inputs;
            node_t output;
    };
}