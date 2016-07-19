#!/bin/bash

#### PROVISION file for 'base-cpp' Development Machine (Environment) ####

if [[  ! -f /home/vagrant/.alias ]]; then
  echo 'if [[ ! -f ~/.alias ]] ; then /home/vagrant/workspace/deploy/load_env.sh; fi' >> /home/vagrant/.bashrc;
  echo 'export TERM=xterm-256color' >> /home/vagrant/.bashrc;
  echo 'source /home/vagrant/.alias' >> /home/vagrant/.bashrc;
fi
