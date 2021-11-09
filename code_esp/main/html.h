const char html[] = {
  "<!DOCTYPE html>\n"
  "<html>\n"
  "<head>\n"
  "<meta charset=\"utf-8\">\n"
  "<title> Mte</title>\n"
  "<style>\n"
  ".c{text-align: center;} div,input{padding:5px;font-size:1em;} input{width:95%;} body{text-align: center;font-family:verdana;} button{border:0;border-radius:0.3rem;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%;}\n"
  ".t{text-align: center;} div,input{padding:5px;font-size:1em;} input{width:50%;} body{text-align: center;font-family:verdana;} button{border:0;border-radius:0.3rem;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%;}\n"
  ".btn{text-align: center;} div,input{padding:5px;font-size:1em;} input{width:25%;} body{text-align: center;font-family:verdana;} button{border:5;border-radius:0.3rem;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:20%;}\n"
  ".q{float: right;width: 64px;text-align: right;}\n"
  ".l{background: url(\"data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAMAAABEpIrGAAAALVBMVEX///8EBwfBwsLw8PAzNjaCg4NTVVUjJiZDRUUUFxdiZGSho6OSk5Pg4eFydHTCjaf3AAAAZElEQVQ4je2NSw7AIAhEBamKn97/uMXEGBvozkWb9C2Zx4xzWykBhFAeYp9gkLyZE0zIMno9n4g19hmdY39scwqVkOXaxph0ZCXQcqxSpgQpONa59wkRDOL93eAXvimwlbPbwwVAegLS1HGfZAAAAABJRU5ErkJggg==\") no-repeat left center;background-size: 1em;}</style>\n"
  "</head>\n"
  "<body>\n"
  "<h1 class=\"c\">Thay đổi mã Token-Blynk</h1><br/><br/><br/>\n"
  "<form method='get' action='wifisave' class=\"t\">\n"
  "<input id='tk' name='tk' length=64  placeholder='Token-Blynk'><br/><br/><br/>\n"
  "<button type='submit' class=\"btn\">Save</button>\n"
  "</form>\n"
  "</br>"
  "<form method='get' action='wifirst' class=\"t\">\n"
  "<button type='submit' class=\"btn\">Reset</button><br/>\n"
  "</form>\n"
  "</body>\n"
  "</html>\n"
};
const char ph_save[] = {
  "<!DOCTYPE html>\n"
  "<html>\n"
  "<head>\n"
  "<meta charset=\"utf-8\">\n"
  "<title> Mte</title>\n"
  "<style>\n"
  ".c{text-align: center;} div,input{padding:5px;font-size:1em;} input{width:95%;} body{text-align: center;font-family:verdana;} button{border:0;border-radius:0.3rem;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%;}\n"
  ".t{text-align: center;} div,input{padding:5px;font-size:1em;} input{width:50%;} body{text-align: center;font-family:verdana;} button{border:0;border-radius:0.3rem;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%;}\n"
  ".btn{text-align: center;} div,input{padding:5px;font-size:1em;} input{width:25%;} body{text-align: center;font-family:verdana;} button{border:5;border-radius:0.3rem;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:20%;}\n"
  ".q{float: right;width: 64px;text-align: right;}\n"
  ".l{background: url(\"data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAMAAABEpIrGAAAALVBMVEX///8EBwfBwsLw8PAzNjaCg4NTVVUjJiZDRUUUFxdiZGSho6OSk5Pg4eFydHTCjaf3AAAAZElEQVQ4je2NSw7AIAhEBamKn97/uMXEGBvozkWb9C2Zx4xzWykBhFAeYp9gkLyZE0zIMno9n4g19hmdY39scwqVkOXaxph0ZCXQcqxSpgQpONa59wkRDOL93eAXvimwlbPbwwVAegLS1HGfZAAAAABJRU5ErkJggg==\") no-repeat left center;background-size: 1em;}</style>\n"
  "</head>\n"
  "<body>\n"
  "<h1 class=\"c\">Đã gửi Token-blynk mới</h1><br/><br/><br/>\n"
  "</body>\n"
  "</html>\n"
};
const char ph_rst[] = {
"<!DOCTYPE html>\n"
  "<html>\n"
  "<head>\n"
  "<meta charset=\"utf-8\">\n"
  "<title> Mte</title>\n"
  "<style>\n"
  ".c{text-align: center;} div,input{padding:5px;font-size:1em;} input{width:95%;} body{text-align: center;font-family:verdana;} button{border:0;border-radius:0.3rem;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%;}\n"
  ".t{text-align: center;} div,input{padding:5px;font-size:1em;} input{width:50%;} body{text-align: center;font-family:verdana;} button{border:0;border-radius:0.3rem;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%;}\n"
  ".btn{text-align: center;} div,input{padding:5px;font-size:1em;} input{width:25%;} body{text-align: center;font-family:verdana;} button{border:5;border-radius:0.3rem;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:20%;}\n"
  ".q{float: right;width: 64px;text-align: right;}\n"
  ".l{background: url(\"data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAMAAABEpIrGAAAALVBMVEX///8EBwfBwsLw8PAzNjaCg4NTVVUjJiZDRUUUFxdiZGSho6OSk5Pg4eFydHTCjaf3AAAAZElEQVQ4je2NSw7AIAhEBamKn97/uMXEGBvozkWb9C2Zx4xzWykBhFAeYp9gkLyZE0zIMno9n4g19hmdY39scwqVkOXaxph0ZCXQcqxSpgQpONa59wkRDOL93eAXvimwlbPbwwVAegLS1HGfZAAAAABJRU5ErkJggg==\") no-repeat left center;background-size: 1em;}</style>\n"
  "</head>\n"
  "<body>\n"
  "<h1 class=\"c\">Đã xóa Token-Blynk</h1><br/><br/><br/>\n"
  "</body>\n"
  "</html>\n"
};