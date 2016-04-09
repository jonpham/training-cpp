#!/bin/bash
 
# CP ENVIRONMENT
arr=(~/sync/std_unix_env/*);

# i=0
# while read line
# do
#     arr[ $i ]="$line"        
#     (( i++ ))
# done < <(ls -ls ~/sync/std-unix-env/)

# iterate through array using a counter
for f in "${arr[@]}"; do
  #cp "$f" "~/.$f"
  echo -e "Copying $f."
  echo -e "Filename : ${f##*/}"
  filename=${f##*/}
  cp -R $f ~/.$filename
done
