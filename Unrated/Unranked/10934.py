import hashlib

msg = input()
msg = msg.encode()
msg_hash = hashlib.new('sha')
msg_hash.update(msg)
print(msg_hash.hexdigest())