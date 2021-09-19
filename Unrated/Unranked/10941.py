import base64

msg_base16 = input()
msg = base64.b16decode(msg_base16)
msg = msg.decode('ascii')

print(msg)