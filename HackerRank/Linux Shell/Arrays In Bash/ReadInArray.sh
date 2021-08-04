i=0
#declare -a arr = {}
while read line
do
arr[$i]=$line
((i+=1))
done
echo ${arr[@]}
