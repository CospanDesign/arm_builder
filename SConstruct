import os
import utils

debug = False

AddOption("--build_debug",
          dest='build_debug',
          action="store_true",
          help='view messages for debugging the build',
          default=False)
AddOption("--clean_build",
          dest="clean_build",
          action="store_true",
          help="Clean the build environment",
          default=False)
AddOption("--config_file",
          type="string",
          dest='config_file',
          action="store",
          help="specify a config file",
          default='config.json')

#Create an environment
env = Environment()

#parse options from the command line
debug = GetOption('build_debug')
clean_build = GetOption('clean_build')

env['CONFIG_FILE'] = GetOption('config_file')
env.Replace(CC = utils.get_c_compiler_path(env))
env.Replace(CXX = utils.get_cxx_compiler_path(env))
env.Replace(CCVERSION = utils.get_compiler_version(env))

Export(CC=utils.get_c_compiler_path(env))


if debug == True:
  d = env.Dictionary()
  keys = d.keys()
  keys.sort()
  print "Compiler Path: %s" % d["CC"]
  for key in keys:
    print "\t%s: %s" % (key, str(d[key]))
  #print "Building: %s" % str(utils.get_compiler_sources(env))
  #print "C Command: %s" % env.subst("$CCCOM")
  #print "CXX Command %s" % env.subst("$CXXCOM")
  #print "Version: %s" % env.subst("$CCVERSION")



t = env.Program(target=utils.get_project_output_target(env), source=utils.get_compiler_sources(env))
#t = Program(target=utils.get_project_name(env), source=utils.get_compiler_sources(env))

Default(t)

