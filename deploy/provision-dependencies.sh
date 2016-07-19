#!/bin/bash

#### PROVISION file for 'base-cpp' Development Machine ####

# Update EPEL Repository
yum -y install epel-release deltarpm;

# Install 'Development Tools'
yum -y groupinstall "Development Tools";

# Install Additional Development Tools
yum -y install cmake cmake3;

# Install Development Extras
yum -y install tmux vim-enhanced tree dos2unix

# Make workspace directory
mkdir -p /home/vagrant/workspace
chown -R vagrant:vagrant /home/vagrant/workspace

# Install Git LFS
curl -s https://packagecloud.io/install/repositories/github/git-lfs/script.rpm.sh | sudo bash
yum -y install git-lfs
git lfs install --force
