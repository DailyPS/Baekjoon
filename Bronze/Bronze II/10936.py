import base64

msg_base64 = input()
msg = base64.b64decode(msg_base64)
msg = msg.decode('ascii')

print(msg)