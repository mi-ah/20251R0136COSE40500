#SOFTWARE SECURITY ASSIGNMENT (2)
#VULNERABILITY TEST
#COMMAND INJECTION
#2022320071


import os
import socket

def is_valid_ip(ip):
    try:
        socket.inet_aton(ip)
        return True
    except socket.error:
        return False

def ping_host(ip_address):
    if not is_valid_ip(ip_address):
        print("Invalid IP address")
        return

    command = f"ping -c 4 {ip_address}"
    response = os.system(command)
    print(f"Ping response for {ip_address}:")
    print(response)

if __name__ == "__main__":
    ip_input = input("Enter IP address to ping: ")
    ping_host(ip_input)
