#include "pbfs_adapt_fuse.hpp"

namespace private_box_fs_carlis {

pbox_fuse_adapter::pbox_fuse_adapter() {
	return 0; 
}

int pbox_fuse_adapter::pbfs_getdir (const char *, fusedirh_t, fusedirfil_t) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_mknod (const char *, nodt_t, dev_t) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_mkdir (const char *, mode_t) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_unlink (const char *) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_rmdir (const char *) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_symlink (const char *, const char *) {
    return 0;
}

int pbox_fuse_adapter::pbfs_rename (const char *, const char *) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_link (const char *, const char *) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_chmod (const char *, mode_t) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_chown (const char *, uid_t, gid_t) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_truncate (const char *, off_t) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_utime (const char *, struct utimbuf *) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_open (const char *, struct fuse_file_info *) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_read (const char *, char *, size_t, off_t,
                                                struct fuse_file_info *) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_write (const char *, const char *, size_t, off_t
                                                 struct fuse_file_info *) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_statfs (const char *, struct statvfs *) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_flush (const char *, struct fuse_file_info *) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_release (const char *, struct fuse_file_info *) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_fsync (const char *, int, struct fuse_file_info *) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_setattr (const char *, const char *, const char *, size_t, int) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_getxattr (const char *, const char *, char *, size_t) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_listxattr (const char *, const char *, xite_t) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_removexattr (const char *, const char *) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_opendir (const char *, struct fuse_file_info *) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_readdir (const char *, void *, fuse_fill_dir_t, off_t, 
                                                           struct fuse_file_info *) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_releasedir (const char *, struct fuse_file_info *) {
	return 0; 
}

int pbox_fuse_adapter::pbfs_fsyncdir (const char *, int, struct fuse_file_info *) {
	return 0; 
}

int *pbfs_init (struct fuse_conn_info *conn) {
	return 0; 
}

}; // end namespace private_box_fs_carlis

private_box_fs_carlis::pbox_fuse_adapter pbfs_adapt();

struct fuse_operations pbfs_opers = {
    .chmod = pbfs_adapt.pbfs_chmod,
    .chown = pbfs_adapt.pbfs_chown,
    .flush = pbfs_adapt.pbfs_flush,
    .fsync = pbfs_adapt.pbfs_fsync,
    .fsyncdir = pbfs_adapt.pbfs_fsyncdir,
    .getattr = pbfs_adapt.pbfs_getattr,
    .getdir = pbfs_adapt.pbfs_getdir,
    .getxattr = pbfs_adapt.pbfs_xattr,
    .link = pbfs_adapt.pbfs_link,
    .listxattr = pbfs_adapt.pbfs_listxattr,
    .mkdir = pbfs_adapt.pbfs_mkdir,
    .mknod = pbfs_adapt.pbfs_mknod,
    .open = pbfs_adapt.pbfs_open,
    .opendir = pbfs_adapt.pbfs_opendir,
    .read = pbfs_adapt.pbfs_read,
    .readdir = pbfs_adapt.pbfs_readdir,
    .release = pbfs_adapt.pbfs_release,
    .releasedir = pbfs_adapt.pbfs_releasedir,
    .removexattr = pbfs_adapt.pbfs_removexattr,
    .rename = pbfs_adapt.pbfs_rename,
    .rmdir = pbfs_adapt.pbfs_rmdir,
    .setattr = pbfs_adapt.pbfs_setattr,
    .statfs = pbfs_adapt.pbfs_statfs,
    .symlink = pbfs_adapt.pbfs_symlink,
    .truncate = pbfs_adapt.pbfs_truncate,
    .unlink = pbfs_adapt.pbfs_unlink,
    .utime = pbfs_adapt.pbfs_utime,
    .write = pbfs_adapt.pbfs_write,
    /*
    .destroy = pbfs_destroy,
    .access = pbfs_access,
    .create = pbfs_create,
    */
    // Initialize this machine.
    .init = pbfs_init,
};

int main(int argc, char *argv[]) {
    int fuse_stat = -99;

    return fuse_stat;
}


