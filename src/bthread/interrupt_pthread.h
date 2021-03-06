// bthread - A M:N threading library to make applications more concurrent.
// Copyright (c) 2012 Baidu, Inc.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Author: Ge,Jun (gejun@baidu.com)
// Date: Tue Jul 10 17:40:58 CST 2012

#ifndef BAIDU_BTHREAD_INTERRUPT_PTHREAD_H
#define BAIDU_BTHREAD_INTERRUPT_PTHREAD_H

#include <pthread.h>

namespace bthread {

// Make blocking ops in the pthread returns -1 and EINTR.
// Returns what pthread_kill returns.
int interrupt_pthread(pthread_t th);

}  // namespace bthread

#endif // BAIDU_BTHREAD_INTERRUPT_PTHREAD_H
