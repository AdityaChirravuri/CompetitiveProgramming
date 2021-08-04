arr=($(cat))
pa=( ${arr[@]/*[aA]*/} )
echo ${pa[@]}
