#!/bin/bash
 
# CP ENVIRONMENT
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"


if [[  -d ~/workspace/deploy && ! -f ~/.alias ]]; then
  # CP ENVIRONMENT
  arr=(${SCRIPT_DIR}/std_unix_env/*);
  
  for f in "${arr[@]}"; do
    #cp "$f" "~/.$f"
    echo -e "Copying $f."
    echo -e "Filename : ${f##*/}"
    filename=${f##*/}
    cp -R $f ~/.$filename
  done
fi

# iterate through array using a counter

