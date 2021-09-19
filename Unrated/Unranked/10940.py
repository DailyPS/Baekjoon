import base64

msg = input()
msg = msg.encode('ascii')
msg_base16 = base64.b16encode(msg)
msg_base16 = msg_base16.decode('ascii')

print(msg_base16)