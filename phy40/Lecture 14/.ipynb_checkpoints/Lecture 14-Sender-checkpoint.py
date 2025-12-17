# This is a simple python code to send a message to a waiting socket
import socket

print("About to send hello...")
with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect(("127.0.0.1", 50007))
    s.sendall(b"Hello from external process")
