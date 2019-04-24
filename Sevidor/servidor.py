import sys
from PyQt5.QtWidgets import QApplication, QDialog, QMainWindow, QFileDialog, QWidget, QMessageBox, QTableWidget, QTableWidgetItem
from PyQt5.uic import loadUi
from PyQt5.QtCore import QTimer, QRegExp
from PyQt5.QtGui import QPixmap, QImage, QRegExpValidator
import threading
from servidor_ui import *
from interfaz_ui import *

class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
	def __init__(self, *args, **kwargs):
		QtWidgets.QMainWindow.__init__(self, *args, **kwargs)
		self.setupUi(self)
		self.label.setText("Bienvenido al Banco El Dorado")
		self.label_2.setText("Versión de Funcionarios")
		self.label_3.setText("Usuario:")
		self.label_4.setText("Contraseña:")
		self.pushButton.setText("Entrar")
	
	def pushButton_clicked(self):
		pass

class InterfaceWindow


if __name__ == "__main__":
	app = QtWidgets.QApplication([])
	window = MainWindow()
	window.show()
	app.exec_()