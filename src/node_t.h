#pragma once

#include "logic_state.h"

namespace logick
{
    class node_t
    {
        public:
            node_t(void)
            {
                state = undef;
            }
            void set_state(const logic_state& state_in) { state = state_in; }
            logic_state get_state(void) const { return state; }
        private:
            logic_state state;
    };
}