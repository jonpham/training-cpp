# Introduction
This readme outlines the design requirements for this training project, meager as they may be.

## Purpose
The purpose of this repository is to illustrate a sample Development Process for Software Product development
using engineering productivity tools provided by the the Software Operations team.
  * **Confluence**; Documentation and Collaboration
  * **JIRA**; Issue / Effort Tracking
  * **Bitbucket Server**; Git Repository Management/Storage
  * **Bamboo**; Continuous Integration / Deployment System

## Pre-Requisite Tools
The following tutorial is written in C++11, and uses the following Libraries and Dependencies:
* CMAKE 3
* GNU GCC
* GoogleTest
* GoogleMock
* Git
* Vagrant (*optional*)

If you would so choose, you can spawn a Sandbox Development Environment using the following commands from the root dir.
```
$ cd deployment/
$ vagrant up
```

## Compilation
Compile the application and tests using the following commands:
```
$ mkdir -p build/
$ cd build/
$ cmake ..
$ make
```
# Purpose
Create a Command Line tool that allows users to traverse through training modules using menu items and console input.
Menu Items should consist of Walk Through Use Cases regarding Web-Based SW productivity Tools.

# Menu Items 

Menu Items are the real heart of this training repository. They can be created and used to demonstrate how Software Development can be done or to try new things in C++.