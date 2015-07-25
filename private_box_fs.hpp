
namespace private_box_fs_carlis {

class private_box_fs {
	public:
		private_box_fs();
		void open();
		void close();
	private:
		int num_files;
};

/*
class pbox_fuse_adapter {
	public:
		int pbfs_getdir (const char *, fusedirh_t, fusedirfil_t);
		int pbfs_mknod (const char *, nodt_t, dev_t);
		int pbfs_mkdir (const char *, mode_t);
		int pbfs_unlink (const char *);
		int pbfs_rmdir (const char *);
		int pbfs_symlink (const char *, const char *):
		int pbfs_rename (const char *, const char *);
		int pbfs_link (const char *, const char *);
		int pbfs_chmod (const char *, mode_t);
		int pbfs_chown (const char *, uid_t, gid_t);
		int pbfs_truncate (const char *, off_t);
		int pbfs_utime (const char *, struct utimbuf *);
		int pbfs_open (const char *, struct fuse_file_info *);
		int pbfs_read (const char *, char *, size_t, off_t,
			       struct fuse_file_info *);
		int pbfs_write (const char *, const char *, size_t, off_t
			        struct fuse_file_info *);
		int pbfs_statfs (const char *, struct statvfs *);
		int pbfs_flush (const char *, struct fuse_file_info *);
		int pbfs_release (const char *, struct fuse_file_info *);
		int pbfs_fsync (const char *, int, struct fuse_file_info *);
		int pbfs_setattr (const char *, const char *, const char *, size_t, int);
		int pbfs_getxattr (const char *, const char *, char *, size_t);
		int pbfs_listxattr (const char *, const char *, xite_t);
		int pbfs_removexattr (const char *, const char *);
		int pbfs_opendir (const char *, struct fuse_file_info *);
		int pbfs_readdir (const char *, void *, fuse_fill_dir_t, off_t, 
			          struct fuse_file_info *);
		int pbfs_releasedir (const char *, struct fuse_file_info *);
		int pbfs_fsyncdir (const char *, int, struct fuse_file_info *);
		int *pbfs_init (struct fuse_conn_info *conn);
};
*/


} /* End 'namespace private_box_fs_carlis'*/ 

/*
int main() {
	ofstream myfile;
	myfile.open("example.txt");
	myfile << "Writing this to a file.:\n";
	myfile.close();
	return 0;
}
*/


