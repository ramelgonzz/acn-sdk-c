/* Copyright (c) 2017 Arrow Electronics, Inc.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Apache License 2.0
 * which accompanies this distribution, and is available at
 * http://apache.org/licenses/LICENSE-2.0
 * Contributors: Arrow Electronics, Inc.
 */

#ifndef ACN_SDK_C_SYS_MUTEX_H_
#define ACN_SDK_C_SYS_MUTEX_H_

int MutexInit(void *mutex);
int MutexLock(void *mutex);
int MutexUnlock(void *mutex);

#endif
