import base64

msg_base32 = input()
msg = base64.b32decode(msg_base32)
msg = msg.decode('ascii')

print(msg)