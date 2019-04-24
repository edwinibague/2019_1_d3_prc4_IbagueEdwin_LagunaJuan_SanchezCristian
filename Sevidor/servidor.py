import sys
from PyQt5.QtWidgets import QApplication, QDialog, QMainWindow, QFileDialog, QWidget, QMessageBox, QTableWidget, QTableWidgetItem
from PyQt5.uic import loadUi
from PyQt5.QtCore import QTimer, QRegExp
from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtGui import QPixmap, QImage, QRegExpValidator
import threading
import tkinter as Tk
from tkinter import *
from tkinter import ttk
from servidor_ui import *

class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
	def __init__(self, *args, **kwargs):
		self.Dep_Ret = False

		#self.Consultar_Cuenta = Ui_Con_Cuent()
		QtWidgets.QMainWindow.__init__(self, *args, **kwargs)
		self.setupUi(self)
		self.label.setText("Bienvenido al Banco El Dorado")
		self.pushButton.setObjectName("Boton")
		self.pushButton.clicked.connect(self.pushButton_clicked)
		self.pushButton_2.clicked.connect(self.pushButton_2_clicked)
		self.pushButton_3.clicked.connect(self.pushButton_3_clicked)

		

		#self.pushButton_6.clicked.connect(self.pushButton_6_clicked)
		#if(Dep_Ret == True):
		#	self.pushButton_9.clicked.connect(self.pushButton_9_clicked)


		self.pushButton_8.clicked.connect(self.pushButton_8_clicked)

		#self.label_2.hide()
		#self.label_3.hide()
		#self.textEdit.hide()
		#self.textEdit_2.hide()
		self.clear()
		self.inicializate()



	def inicializate(self):
		self.clear()

		self.label.move(155, 20)
		self.label.resize(300,50)
		self.label.setText("Bienvenido al Banco El Dorado")
		self.label.show()

		self.pushButton.move(30, 110)
		self.pushButton.setText("Consultar Cuenta")
		self.pushButton.show()

		self.pushButton_2.move(220, 110)
		self.pushButton_2.setText("Consultar o Modificar\nCliente")
		self.pushButton_2.show()

		self.pushButton_3.move(400, 110)
		self.pushButton_3.setText("Bloquear o Desbloquear\nCuenta")
		self.pushButton_3.show()

		self.pushButton_4.move(30, 180)
		self.pushButton_4.setText("Crear Cuenta")
		self.pushButton_4.show()

		self.pushButton_5.move(220, 180)
		self.pushButton_5.setText("Crear Cliente")
		self.pushButton_5.show()

		self.pushButton_6.move(400, 180)
		self.pushButton_6.setText("Depositar o Retirar")
		self.pushButton_6.show()

		self.pushButton_7.move(220, 250)
		self.pushButton_7.setText("Consultas")
		self.pushButton_7.show()




	def clear(self):
		self.label.hide()
		self.label_2.hide()
		self.label_3.hide()

		self.textEdit.hide()
		self.textEdit_2.hide()

		self.pushButton.hide()
		self.pushButton_2.hide()
		self.pushButton_3.hide()
		self.pushButton_4.hide()
		self.pushButton_5.hide()
		self.pushButton_6.hide()
		self.pushButton_7.hide()
		self.pushButton_8.hide()
		self.pushButton_9.hide()

	def pushButton_clicked(self):#Consultar Cuenta
		
		self.clear()

		self.label.move(155, 20)
		self.label.resize(300,50)
		self.label.setText("Consultar Cuenta")
		self.label.show()

		self.pushButton_9.move(150, 300)
		self.pushButton_9.setText("Ingresar")
		self.pushButton_9.show()
		self.pushButton_8.move(350, 300)
		self.pushButton_8.setText("Regresar")
		self.pushButton_8.show()

		self.label_2.move(0, 120)
		self.label_2.resize(200,50)
		self.label_2.setText("Numero de Cuenta")

		self.label_3.move(0, 180)
		self.label_3.resize(200,50)
		self.label_3.setText("Contraseña")

		self.textEdit.move(210, 120)
		self.textEdit.resize(350, 50)

		self.textEdit_2.move(210, 180)
		self.textEdit_2.resize(350, 50)

		self.label_2.show()
		self.label_3.show()
		self.textEdit.show()
		self.textEdit_2.show()
		
	def pushButton_2_clicked(self):#Consultar Cuenta
		
		self.clear()

		self.label.move(155, 20)
		self.label.resize(300,50)
		self.label.setText("Consultar o Modificar\nCliente")
		self.label.show()

		self.pushButton_9.move(150, 300)
		self.pushButton_9.setText("Ingresar")
		self.pushButton_9.show()
		self.pushButton_8.move(350, 300)
		self.pushButton_8.setText("Regresar")
		self.pushButton_8.show()

		self.label_2.move(0, 120)
		self.label_2.resize(200,50)
		self.label_2.setText("Numero de Cedula")

		self.label_3.move(0, 180)
		self.label_3.resize(200,50)
		self.label_3.setText("Contraseña")
		
		self.textEdit.move(210, 120)
		self.textEdit.resize(350, 50)

		self.textEdit_2.move(210, 180)
		self.textEdit_2.resize(350, 50)

		self.label_2.show()
		self.label_3.show()
		self.textEdit.show()
		self.textEdit_2.show()

	def pushButton_3_clicked(self):#Consultar Cuenta
		
		self.clear()

		self.label.move(155, 20)
		self.label.resize(300,50)
		self.label.setText("Bloquear o Desbloquear\nCuenta")
		self.label.show()

		self.pushButton_9.move(150, 300)
		self.pushButton_9.setText("Ingresar")
		self.pushButton_9.show()
		self.pushButton_8.move(350, 300)
		self.pushButton_8.setText("Regresar")
		self.pushButton_8.show()

		self.label_2.move(0, 120)
		self.label_2.resize(200,50)
		self.label_2.setText("Numero de Cuenta")

		self.label_3.move(0, 180)
		self.label_3.resize(200,50)
		self.label_3.setText("Contraseña")
		
		self.textEdit.move(210, 120)
		self.textEdit.resize(350, 50)

		self.textEdit_2.move(210, 180)
		self.textEdit_2.resize(350, 50)

		self.label_2.show()
		self.label_3.show()
		self.textEdit.show()
		self.textEdit_2.show()









	def pushButton_6_clicked(self):#Consultar Cuenta
		
		self.Dep_Ret = True

		self.clear()

		self.label.move(155, 20)
		self.label.resize(300,50)
		self.label.setText("Depositar o Retirar")
		self.label.show()

		self.pushButton_9.move(150, 300)
		self.pushButton_9.setText("Ingresar")
		self.pushButton_9.show()
		self.pushButton_8.move(350, 300)
		self.pushButton_8.setText("Regresar")
		self.pushButton_8.show()

		self.label_2.move(0, 120)
		self.label_2.resize(200,50)
		self.label_2.setText("Numero de Cuenta")

		self.label_3.move(0, 180)
		self.label_3.resize(200,50)
		self.label_3.setText("Contraseña")
		
		self.textEdit.move(210, 120)
		self.textEdit.resize(350, 50)

		self.textEdit_2.move(210, 180)
		self.textEdit_2.resize(350, 50)

		self.label_2.show()
		self.label_3.show()
		self.textEdit.show()
		self.textEdit_2.show()


	def pushButton_8_clicked(self):
		self.inicializate()

	def OnCloseCon_Cuent(self, Con_Cuent):
		Con_Cuent.destroy()
		self.show()

class Aplicacion():
	''' Clase Aplicacion '''
	
	# Declara una variable de clase para contar ventanas
	
	ventana = 0

	# Declara una variable de clase para usar en el
	# cálculo de la posición de una ventana
	
	posx_y = 0
		
	def __init__(self):
		''' Construye ventana de aplicación '''
					  
		# Declara ventana de aplicación
		
		self.raiz = Tk()
		
		# Define dimensión de la ventana 300x200
		# que se situará en la coordenada x=500,y=50 
		
		self.raiz.geometry('300x200+500+50')
		
		self.raiz.resizable(0,0)
		self.raiz.title("Banco El Dorado")
		
		# Define botón 'Abrir' que se utilizará para 
		# abrir las ventanas de diálogo. El botón
		# está vinculado con el método 'self.abrir'
		
		boton = ttk.Button(self.raiz, text='Abrir', 
						   command=self.abrir)
		boton.pack(side=BOTTOM, padx=20, pady=20)
		self.raiz.mainloop()

	def abrir(self):
		''' Construye una ventana de diálogo '''
		
		# Define una nueva ventana de diálogo
		
		self.dialogo = Toplevel()
		
		# Incrementa en 1 el contador de ventanas
		
		Aplicacion.ventana+=1
		
		# Recalcula posición de la ventana
		
		Aplicacion.posx_y += 50
		tamypos = '200x100+'+str(Aplicacion.posx_y)+ \
				  '+'+ str(Aplicacion.posx_y)
		self.dialogo.geometry(tamypos)
		self.dialogo.resizable(0,0)
		
		# Obtiene identicador de la nueva ventana 
		
		ident = self.dialogo.winfo_id()
		
		# Construye mensaje de la barra de título
		
		titulo = str(Aplicacion.ventana)+": "+str(ident)
		self.dialogo.title(titulo)
		
		# Define el botón 'Cerrar' que cuando sea
		# presionado cerrará (destruirá) la ventana 
		# 'self.dialogo' llamando al método
		# 'self.dialogo.destroy'
		
		boton = ttk.Button(self.dialogo, text='Cerrar', 
						   command=self.dialogo.destroy)   
		boton.pack(side=BOTTOM, padx=20, pady=20)
		
		# Cuando la ejecución del programa llega a este 
		# punto se utiliza el método wait_window() para
		# esperar que la ventana 'self.dialogo' sea 
		# destruida. 
		# Mientras tanto se atiende a los eventos locales
		# que se produzcan, por lo que otras partes de la
		# aplicación seguirán funcionando con normalidad. 
		# Si hay código después de esta línea se ejecutará
		# cuando la ventana 'self.dialogo' sea cerrada.

		self.raiz.wait_window(self.dialogo)

if __name__ == "__main__":
	app = QtWidgets.QApplication([])
	window = MainWindow()
	window.show()
	app.exec_()