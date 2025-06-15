#!/bin/bash
home_dir=/home/spaisya/btrfs_dir
rm -rf ${home_dir}/*
dd if=/dev/zero of=${home_dir}/test bs=1024 count=2000
for i in {1..100}; do
	cp --reflink=auto ${home_dir}/test ${home_dir}/test$i
done
