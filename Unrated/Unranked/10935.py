import base64

msg = input()
msg = msg.encode('ascii')
msg_base64 = base64.b64encode(msg)
msg_base64 = msg_base64.decode('ascii')

print(msg_base64)