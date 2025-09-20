for i in $(seq 25) 
do
    ./corrupcao < ./IN/$i.in > ./OUT/$i.out
done
