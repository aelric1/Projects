import qrcode

url= input(" Enter the URL :").strip()
file_path= "C:\\Users\\HP\\Desktop\\qrcode.png"

def qr_gen(url, path):
    qr=qrcode.QRCode()
    qr.add_data(url)
    img=qr.make_image()
    img.save(path)
    print(" Qrcode was generated!")
    
qr_gen(url, file_path)


