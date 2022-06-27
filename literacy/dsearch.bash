#! /usr/bin/bash
countParam=$#
sum=0
while ["$1" !=""];do
    ((sum+=$1))
    shift
done
echo $(($sum/$countParam))
