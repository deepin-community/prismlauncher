/* Copyright 2013-2021 MultiMC Contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <launch/LaunchStep.h>
#include <LoggedProcess.h>
#include <minecraft/auth/AuthSession.h>

// Create the main .minecraft for the instance and any other necessary folders
class CreateGameFolders: public LaunchStep
{
    Q_OBJECT
public:
    explicit CreateGameFolders(LaunchTask *parent);
    virtual ~CreateGameFolders() {};

    virtual void executeTask();
    virtual bool canAbort() const
    {
        return false;
    }
};


