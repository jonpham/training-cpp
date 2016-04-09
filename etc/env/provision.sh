#!/bin/bash

#### PROVISION file for 'phamjk-base-cpp' Development Machine ####

# Update EPEL Repository
yum -y install epel-release;

# Install 'Development Tools'
yum -y groupinstall "Development Tools"

# Install Additional Development Tools
yum -y install cmake

# Install Development Extras
yum -y install tmux vim-enhanced

# Make workspace directory
mkdir -p /home/vagrant/workspace
chown -R vagrant:vagrant /home/vagrant/workspace
