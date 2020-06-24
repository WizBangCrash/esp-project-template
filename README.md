# Overview

This is a project template repo. Designed to give a starting point for using
vscode to edit and build a ESP8266 project using the esp-open-rtos,
The repo contains all the initial set up for using a vscode workspace and a
open-rtos-sdk docker container to build the source code.

## Prerequisites

The following directory structure is assumed to be present for the repo to work:

```text
...\
   |- project
   |- esp-open-rtos
```

The `project` directory should contain the contents of this repo.
The `esp-open-rtos` directory should contain a clone of the
**[esp-open-rtos](https://github.com/SuperHouse/esp-open-rtos.git)**
repository:

```text
# cd ~/projects
# git clone https://github.com/SuperHouse/esp-open-rtos.git
```

The environmental variable **NODEMCU_DIR** should be set to the top level
directory containing the directories listed above e.g.

```text
# export NODEMCU_DIR=~/projects
```

You will also have cloned and built the [esp-docker-tools](https://github.com/WizBangCrash/esp-docker-tools)
repository.

## Your Project

Once you have satisfied the prerequisites you can modify the files in the project
directory to start creating your wonderful new idea.

1. Rename the file `project-template.c` to your project name
1. Rename the file `project-template.code-workspace` to your project name
1. Change the `PROGRAM` variable in the `Makefile` to your project name
1. Build your project by typing **SHIFT-CMD-B** or selecting `Terminal->Run Build Task...`