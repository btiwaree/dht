/*
 * Copyright (c) 2003 [NAMES_GO_HERE]
 *                    Massachusetts Institute of Technology
 * 
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 */

#ifndef __ROUNDTRIPS_FAILURE_MODEL_H
#define __ROUNDTRIPS_FAILURE_MODEL_H

#include "p2psim/failuremodel.h"
#include "p2psim/args.h"

// this class punishes failed packets by delaying them in factors of half of the
// roundtrip time.  So setting _factor to 2 adds another full roundtrip time.
class RoundtripsFailureModel : public FailureModel {
public:
  RoundtripsFailureModel(Args *a);
  virtual Time failure_latency(Packet*);

private:
  int _factor;
};

#endif // __ROUNDTRIPS_FAILURE_MODEL_H
