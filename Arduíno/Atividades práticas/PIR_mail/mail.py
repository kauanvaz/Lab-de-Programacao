# -*- coding: utf-8 -*-
import smtplib
import serial
import datetime as dt
import time

GMAIL_USER = 'obersteindidnothingwrong@gmail.com'
GMAIL_PASSWORD = '123labprog'
serialPy = serial.Serial('COM5', 9600)

def send_email():
    try:
        serialPy.close()
        con = smtplib.SMTP('smtp.gmail.com', 587)
        con.ehlo()
        con.starttls()
        con.ehlo()
        con.login(GMAIL_USER, GMAIL_PASSWORD)
        now = dt.datetime.now()
        #ASSUNTO = "Movimento detectado!"
        #message = "Subject: {}\nMovimento detectado!!! Sua casa esta em apuros!!!\nHora: {}:{}:{}.\n".format(ASSUNTO, now.hour, now.minute, now.second)
        ASSUNTO = "Eu capturei seu cachorro."
        message = "Se nao tiver cachorro, capturei seu gato."
        con.sendmail(GMAIL_USER, 'longsomeroad2@gmail.com', message)
        print("Email enviado!")
        serialPy.open()
        con.quit()
    except Exception as e:
        print(e)

while True:
    message = serialPy.readline().decode('utf-8').strip()
    print(message)
    if message == 'S':
      send_email()
    time.sleep(0.5)

