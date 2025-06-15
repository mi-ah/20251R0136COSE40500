PROJECT 1: EXPLORATION OF CoW FILE SYSTEM
_________________________________________

NAME: 아이샤
STUDENT ID: 2022320071
SUBMISSION DATE: 19th APRIL 2025
COURSE: System Programming (COSE322)

----------------
PROJECT OVERVIEW
----------------
In this project, we investigate the behavior of Copy-on-Write (CoW) mechanisms in modern file systems, specifically BTRFS and compare it with older file system which is EXT4. The study includes kernel-level modifications to monitor write operations, the implementation of a test environment using virtual disks, and performance/result analysis through logging and visualization.

FILES OVERVIEW
1) Source Code (ext4.c, btrfs.c)
ext4_file_write_iter() function in the fs/ext4/file.c was modified to insert logging functionalities using `printk()` that capture:
- File path
- Inode number
- Offset value

same goes with btrfs file. 
function: btrfs_file_write_iter()
file: fs/btrfs.file.c

2) Test Script (testscript_ext4.sh, testscript_btrfs.sh)
The bash shell scripts to automate the file copy operations for both EXT4 and BTRFS virtual disks. 2MB files are created and copied 100 times. Both scripts must be run after mounting the file system correctly on their respective test directories (/home/spaisya/ext4_dir, /home/spaisya/btrfs_dir)

3) Result analysis File (analysis_result.xlsx)
This Excel file contains the logged outputs from the kernel messages after running the test scripts. The outputs are:
- Timestamps
- File path
- Inode numbers
- Offset values

4) Project report (report.pdf)
Final report for the project. it contains:
- background knowledge
- source code explanation
- test environment setup explaination
- result comparative analysis
- challenges and solution

-----------------
ENVIRONMENT SETUP
-----------------
VirtualBox Ubuntu 22.04 (64 bit), Linux kernel 5.15 (VM environment)

--------------------------
HOW TO RUN THE TEST SCRIPT
--------------------------
1) Create virtual disk (ext4dfile, btrfsdfile)
2) Set the appropriate directory paths inside the testscript
3) Run the script and capture the kernel log (sudo dmesg)

---------------
RESULT ANALYSIS
---------------
- Disk Write Count: EXT4 had ~3000 writes vs. BTRFS ~2000. This shows BTRFS's CoW reduces disk I/O.
- Inode Numbers Over Time: EXT4 shows higher and more stable inode numbers, while BTRFS uses smaller, faster-changing inodes, indicating delayed or optimized writes.
- Offset Patterns: BTRFS offsets cluster early (faster write completion), while EXT4 shows more scattered writes.

----------
Conclusion
----------
BTRFS's CoW mechanism improves write efficiency and reduces disk operations compared to EXT4.


