for i in $(seq 15)
do
    diff --strip-trailing-cr ./OUT/$i.out ./ANS/$i.ans
done
