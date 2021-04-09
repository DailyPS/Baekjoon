import hashlib

msg = input()
msg = msg.encode()
msg_hash = hashlib.sha1()
msg_hash.update(msg)
print(msg_hash.hexdigest())