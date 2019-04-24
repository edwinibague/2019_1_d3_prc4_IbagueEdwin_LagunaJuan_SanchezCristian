from servidor_ui import *


class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QtWidgets.QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi()

        self.label.setText("Bienvenidos a la Plataforma Virtual del Banco El Dorado")
        self.label_2.setText("Versión para Funcionarios")
        self.label_3.setText("Usuario:")
        self.label_4.setText("Contraseña:")
        self.pushButton.setText("Entrar")

if __name__ == "__main__":
    app = QtWidgets.QApplication([])
    window = MainWindow()
    window.show()
    app.exec_()