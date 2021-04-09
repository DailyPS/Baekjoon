import base64

msg = input()
msg = msg.encode('ascii')
msg_base32 = base64.b32encode(msg)
msg_base32 = msg_base32.decode('ascii')

print(msg_base32)