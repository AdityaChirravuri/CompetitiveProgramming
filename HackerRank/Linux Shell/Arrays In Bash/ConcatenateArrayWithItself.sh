#i=0
##while read line
##do 
#arr[$i]=$line
#((i+=1))
#done
#tot=("${arr[@]}" "${arr[@]}" "${arr[@]}")
#echo ${tot[@]}
array=($(cat))
Total=("${array[@]}" "${array[@]}" "${array[@]}")
echo ${Total[@]}
