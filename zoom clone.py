from vidstream import *
import tkinter as tk
import threading
import socket

local_ip_address = socket.gethostbyname(socket.gethostname())

server = StreamingServer(local_ip_address,9999)
receiver = AudioReceiver(local_ip_address,8888)

def start_listening():
    t1 = threading.Thread(target=server.start_server)
    t2 = threading.Thread(target=receiver.start_server)
    t1.start()
    t2.start()

def start_camer_stream():
    Camera_client = CameraClient(text_target_ip.get(1.0, 'end-1c'),7777)
    t3=threading.Thread(target=Camera_client.start_stream)
    t3.start()

def start_screen_stream():
    screen_client=ScreenShareClient(text_target_ip.get(1.0,'end-1c'),7777)
    t4 = threading.Thread(target=screen_client.start_stream)
    t4.start()

def start_audio_stream():
    audio_sender = AudioSender(text_target_ip.get(1.0,'end-1c'),6666)
    t5 = threading.Thread(target=audio_sender.start_stream)
    t5.start()




window=tk.Tk()
window.title('zoom clone')
window.geometry('300x200')

label_target_ip = tk.Label(window,text='target ip:')
label_target_ip.pack()

text_target_ip = tk.Text(window,height=1)
text_target_ip.pack()

btn_listen = tk.Button(window,text='start listening', width=50, bg='red',command=start_listening)
btn_listen.pack(anchor=tk.CENTER, expand=True)

btn_camera = tk.Button(window,text='strart camera stream', width=50, command=start_camer_stream)
btn_camera.pack(anchor=tk.CENTER, expand=True)

btn_screen = tk.Button(window,text='start screen sharing' , width=50, command=start_screen_stream)
btn_screen.pack(anchor=tk.CENTER, expand=True)

btn_audio = tk.Button(window, text='start audio stream', width=50, command=start_audio_stream)
btn_audio.pack(anchor=tk.CENTER, expand=True)

window.mainloop()
