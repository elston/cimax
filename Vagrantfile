VAGRANTFILE_API_VERSION = "2"
#.....
Vagrant.configure(VAGRANTFILE_API_VERSION) do |config|
    #.....
    config.vm.box = "ubuntu/xenial64"
    # ..
    config.vm.provider "virtualbox" do |vb|
        vb.customize ["modifyvm", :id, "--memory", "512"]
    end
    # ..
    # config.vm.provision :shell, :path => "vg_bootstrap.sh"    
end
