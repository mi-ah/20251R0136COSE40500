#SOFTWARE SECURITY ASSIGNMENT (2)
#VULNERABILITY TEST
#COMMAND INJECTION
#2022320071


import os

def ping_host(ip_address):
    command = f"ping -c 4 {ip_address}"
    response = os.system(command)
    print(f"Ping response for {ip_address}:")
    print(response)

if __name__ == "__main__":
    ip_input = input("Enter IP address to ping: ")
    ping_host(ip_input)
