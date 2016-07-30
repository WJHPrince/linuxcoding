#判断输入是否正确
if [ $# -lt 1 -o $# -gt 1 ] 
then
		echo "usage: auto_vim_note file"
		exit 1
fi
if [ ! -f $1 ]
then 
		echo "file do not exit, do you want to create it?(y/n)"
		read choose
		if [ $choose == 'y' -o $choose == 'Y' ]
		then 
				touch $1
		fi
fi

read
if_quit=`echo $REPLY | awk -F ' ' '{print $1}'`
while [ $if_quit != "quit" ]
do
echo $REPLY >> $1
read 
if_quit=`echo $REPLY | awk -F ' ' '{print $1}'`
done
