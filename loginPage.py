import tkinter as tk
from tkinter import messagebox

USERNAME = 'Jonathan'
PASSWORD = 'KAVEVA'

def login() :
    usn = username_entry.get()
    pw = password_entry.get()
    if usn == USERNAME and pw == PASSWORD :
        messagebox.showinfo("You have successfully login the app")
        open_dashboard()

def open_dashboard():
    dashboard = tk.TopLevel(root)

root = tk.Tk()
root.title = 'Login Page'
root.geometry = '400 X 500'
root.resizable = 'false, false'

tk.Label(
    root, 
    text = 'Login', 
    font = ('Arial', 18, 'bold')).pack(pady =10)

tk.Label (
    root, 
    text = 'Please Type your Username', 
    font = ('Arial', 12, 'bold')
).pack(pady = 5, anchor = 'w')

username_entry = tk.Entry(root)
username_entry.pack()

tk.Label (
    root, 
    text = 'Please Type your Password', 
    font = ('Arial', 12, 'bold')
).pack(pady = 5, anchor = 'w')

password_entry = tk.Entry(root, show = '*')
password_entry.pack()

tk.Button (
    root, 
    text = "Login",
    command = login
).pack()

root.mainloop()
