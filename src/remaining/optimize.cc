#include "optimize.hh"

/*** This file contains all code pertaining to AST optimisation. It currently
     implements a simple optimisation called "constant folding". Most of the
     methods in this file are empty, or just relay optimize calls downward
     in the AST. If a more powerful AST optimization scheme were to be
     implemented, only methods in this file should need to be changed. ***/


ast_optimizer *optimizer = new ast_optimizer();


/* The optimizer's interface method. Starts a recursive optimize call down
   the AST nodes, searching for binary operators with constant children. */
void ast_optimizer::do_optimize(ast_stmt_list *body)
{
    if (body != NULL) {
        body->optimize();
    }
}


/* Returns 1 if an AST expression is a subclass of ast_binaryoperation,
   ie, eligible for constant folding. */
bool ast_optimizer::is_binop(ast_expression *node)
{
    switch (node->tag) {
    case AST_ADD:
    case AST_SUB:
    case AST_OR:
    case AST_AND:
    case AST_MULT:
    case AST_DIVIDE:
    case AST_IDIV:
    case AST_MOD:
        return true;
    default:
        return false;
    }
}



/* We overload this method for the various ast_node subclasses that can
   appear in the AST. By use of virtual (dynamic) methods, we ensure that
   the correct method is invoked even if the pointers in the AST refer to
   one of the abstract classes such as ast_expression or ast_statement. */
void ast_node::optimize()
{
    fatal("Trying to optimize abstract class ast_node.");
}

void ast_statement::optimize()
{
    fatal("Trying to optimize abstract class ast_statement.");
}

void ast_expression::optimize()
{
    fatal("Trying to optimize abstract class ast_expression.");
}

void ast_lvalue::optimize()
{
    fatal("Trying to optimize abstract class ast_lvalue.");
}

void ast_binaryoperation::optimize()
{
    fatal("Trying to optimize abstract class ast_binaryoperation.");
}

void ast_binaryrelation::optimize()
{
    fatal("Trying to optimize abstract class ast_binaryrelation.");
}



/*** The optimize methods for the concrete AST classes. ***/

/* Optimize a statement list. */
void ast_stmt_list::optimize()
{
    if (preceding != NULL) {
        preceding->optimize();
    }
    if (last_stmt != NULL) {
        last_stmt->optimize();
    }
}


/* Optimize a list of expressions. */
void ast_expr_list::optimize()
{
    /* Your code here */
    
    if (preceding != NULL) {
        preceding->optimize();
    }
    if (last_expr != NULL) {
        last_expr->optimize();
        last_expr = optimizer->fold_constants(last_expr);
    }
}


/* Optimize an elsif list. */
void ast_elsif_list::optimize()
{
    /* Your code here */


    if (preceding != NULL) {
        preceding->optimize();
    }
    if (last_elsif != NULL) {
        last_elsif->optimize();
    }
}


/* An identifier's value can change at run-time, so we can't perform
   constant folding optimization on it unless it is a constant.
   Thus we just do nothing here. It can be treated in the fold_constants()
   method, however. */
void ast_id::optimize()
{
}

void ast_indexed::optimize()
{
    /* Your code here */
    if (index != NULL) {
        index->optimize();
        index = optimizer->fold_constants(index);
    }
}



/* This convenience method is used to apply constant folding to all
   binary operations. It returns either the resulting optimized node or the
   original node if no optimization could be performed. */
ast_expression *ast_optimizer::fold_constants(ast_expression *node)
{
    if (!is_binop(node)) return node;
    ast_binaryoperation *binop = node->get_ast_binaryoperation();
      
    //ast_integer *li2 = fold_constants(binop->left)->get_ast_integer();
    //cout << li2 << endl;
    //        return new ast_integer(binop->pos, li2->value);
    if (binop->left->tag == AST_INTEGER && binop->right->tag == AST_INTEGER)
    {
    ast_integer *li = fold_constants(binop->left)->get_ast_integer();
    ast_integer *ri = fold_constants(binop->right)->get_ast_integer();
    switch (binop->tag) {
        case AST_ADD:
            return new ast_integer(binop->pos, li->value + ri->value);
        case AST_SUB:
            return new ast_integer(binop->pos, li->value - ri->value);
        case AST_OR:
            return new ast_integer(binop->pos, li->value | ri->value);
        case AST_AND:
            return new ast_integer(binop->pos, li->value & ri->value);
        case AST_MULT:
            return new ast_integer(binop->pos, li->value * ri->value);
        case AST_IDIV:
            return new ast_integer(binop->pos, li->value / ri->value);
        case AST_MOD:
            return new ast_integer(binop->pos, li->value % ri->value);
        default:
            fatal("Error folding constants");
    }
    }
    else if (binop->left->tag == AST_REAL && binop->right->tag == AST_REAL)
    {
    ast_real *li = fold_constants(binop->left)->get_ast_real();
    ast_real *ri = fold_constants(binop->right)->get_ast_real();
    switch (binop->tag) {
        case AST_ADD:
            return new ast_real(binop->pos, li->value + ri->value);
        case AST_SUB:
            return new ast_real(binop->pos, li->value - ri->value);
        case AST_MULT:
            return new ast_real(binop->pos, li->value * ri->value);
        case AST_DIVIDE:
            return new ast_real(binop->pos, li->value / ri->value);
        default:
            fatal("Error folding constants");
    }
    }
    return node;
}

/* All the binary operations should already have been detected in their parent
   nodes, so we don't need to do anything at all here. */
void ast_add::optimize()
{
    /* Your code here */
}

void ast_sub::optimize()
{
    /* Your code here */
}

void ast_mult::optimize()
{
    /* Your code here */
}

void ast_divide::optimize()
{
    /* Your code here */
}

void ast_or::optimize()
{
    /* Your code here */
}

void ast_and::optimize()
{
    /* Your code here */
}

void ast_idiv::optimize()
{
    /* Your code here */
}

void ast_mod::optimize()
{
    /* Your code here */
}



/* We can apply constant folding to binary relations as well. */
void ast_equal::optimize()
{
    /* Your code here */
    if (left != NULL) {
        left->optimize();
        left = optimizer->fold_constants(left);
    }
    if (right != NULL) {
        right->optimize();
        right = optimizer->fold_constants(right);
    }
}

void ast_notequal::optimize()
{
    /* Your code here */    
    if (left != NULL) {
        left->optimize();
        left = optimizer->fold_constants(left);
    }
    if (right != NULL) {
        right->optimize();
        right = optimizer->fold_constants(right);
    }

}

void ast_lessthan::optimize()
{
    /* Your code here */
    if (left != NULL) {
        left->optimize();
        left = optimizer->fold_constants(left);
    }
    if (right != NULL) {
        right->optimize();
        right = optimizer->fold_constants(right);
    }

}

void ast_greaterthan::optimize()
{
    /* Your code here */
    if (left != NULL) {
        left->optimize();
        left = optimizer->fold_constants(left);
    }
    if (right != NULL) {
        right->optimize();
        right = optimizer->fold_constants(right);
    }

}



/*** The various classes derived from ast_statement. ***/

void ast_procedurecall::optimize()
{
    /* Your code here */

    if (parameter_list != NULL) {
        parameter_list->optimize();
    }
}


void ast_assign::optimize()
{
    /* Your code here */
    if (lhs != NULL) {
        lhs->optimize();
    }

    // The right
    if (rhs != NULL) {
        rhs->optimize();
        rhs = optimizer->fold_constants(rhs);
    }
}


void ast_while::optimize()
{
    /* Your code here */
    if (condition != NULL) {
        condition->optimize();
        condition = optimizer->fold_constants(condition);
    }
    if (body != NULL) {
        body->optimize();
    }
}


void ast_if::optimize()
{
    /* Your code here */
    if (condition != NULL) {
        condition->optimize();
        condition = optimizer->fold_constants(condition);
    }
    if (body != NULL) {
        body->optimize();
    }
    if (elsif_list != NULL) {
        elsif_list->optimize();
    }
    if (else_body != NULL) {
        else_body->optimize();
    }
}


void ast_return::optimize()
{
    /* Your code here */
    if (value != NULL) {
        value->optimize(); 
        value = optimizer->fold_constants(value);
    }
}


void ast_functioncall::optimize()
{
    /* Your code here */
    if (parameter_list != NULL) {
        parameter_list->optimize();
    }
}

void ast_uminus::optimize()
{
    /* Your code here  */
    if (expr != NULL) {
        expr->optimize();
        expr = optimizer->fold_constants(expr);
    }
}

void ast_not::optimize()
{
    /* Your code here */
    if (expr != NULL) {
        expr->optimize();
        expr = optimizer->fold_constants(expr);
    }
}


void ast_elsif::optimize()
{
    /* Your code here */

    if (condition != NULL) {
        condition->optimize();
        condition = optimizer->fold_constants(condition);
    }
    if (body != NULL) {
        body->optimize();
    }
}



void ast_integer::optimize()
{
    /* Your code here */
}

void ast_real::optimize()
{
    /* Your code here */
}

/* Note: See the comment in fold_constants() about casts and folding. */
void ast_cast::optimize()
{
    /* Your code here */
}



void ast_procedurehead::optimize()
{
    fatal("Trying to call ast_procedurehead::optimize()");
}


void ast_functionhead::optimize()
{
    fatal("Trying to call ast_functionhead::optimize()");
}
