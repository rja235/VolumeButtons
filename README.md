<!--
#
# Licensed to the Apache Software Foundation (ASF) under one
# or more contributor license agreements.  See the NOTICE file
# distributed with this work for additional information
# regarding copyright ownership.  The ASF licenses this file
# to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance
# with the License.  You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing,
# software distributed under the License is distributed on an
# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
#  KIND, either express or implied.  See the License for the
# specific language governing permissions and limitations
# under the License.
#
-->


# VolumeButtons

----

## Description

A Plugin that allows access to the Volume Buttons on the side of the device as well as on the headphones.


## LICENSE


Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

## Quickstart

    In your project folder using the cli
    phonegap plugin add https://www.github.com/rja235/VolumeButtons
    
    To use in your phonegap build (pending approval)
    
    add com.herenow.VolumeButtons to your config.xml
    
    
```
  <gap:plugin name="com.herenow.VolumeButtons" />
```


## Supported Platforms

* iOS

## How to use it

Insert the js file, something like this 
```
  <script type="text/javascript" src="js/VolumeButtons.js"></script>
```
  To add access to volume buttons
```
  <script>
     navigator.VolumeButtons.clickButton();
  </script>
```


