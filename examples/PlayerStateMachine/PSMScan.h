/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Alan Amaral
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef PLAYER_STATE_SCAN_H
#define PLAYER_STATE_SCAN_H

#include "PSMState.h"

class PlayerStateScan : public PlayerState
{
    public:
        PlayerStateScan(StateId_t stateId,
                        const char *name,
                        StateMachine* pStateMachine);

        // From PlayerInterface

    protected:
        float m_Speed;
};

#endif

// To enable vim modelines:
// put "set modeline" and "set modelines=5" in ~/.vimrc
// vim:ts=4 sw=4 tw=80 expandtab smartindent
