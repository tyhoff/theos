one : clean ddeb all package


ddeb :
	rm -f com.*

upload :
	ssh vps 'setopt NULL_GLOB; rm -f /var/www/cydia.tyhoffman.com/public_html/deb_files/*$(shell echo $(TWEAK_NAME) | tr A-Z a-z)*'
	scp com.* vps:/var/www/cydia.tyhoffman.com/public_html/deb_files
	ssh vps 'cd /var/www/cydia.tyhoffman.com; bash /var/www/cydia.tyhoffman.com/script.sh'